import os
from pathlib import Path
from datetime import datetime
from PIL import Image
from PIL.ExifTags import TAGS
import os
from pathlib import Path
from datetime import datetime
from PIL import Image
from PIL.ExifTags import TAGS

def get_photo_date_taken(file_path):
    """Get the DateTimeOriginal from a photo's EXIF metadata."""
    try:
        image = Image.open(file_path)
        exif_data = image._getexif()
        if exif_data:
            for tag, value in exif_data.items():
                if TAGS.get(tag) == 'DateTimeOriginal':
                    return datetime.strptime(value, '%Y:%m:%d %H:%M:%S')
    except Exception:
        pass
    return None

def get_file_modified_date(file_path):
    """Get the last modified date for files."""
    try:
        stat = file_path.stat()
        return datetime.fromtimestamp(stat.st_mtime)  # Use last modified time
    except Exception:
        return None

def organize_files_by_month(src_folder, dest_folder):
    """Organize photos and videos into folders by month and year."""
    src_folder = Path(src_folder)
    dest_folder = Path(dest_folder)
    dest_folder.mkdir(parents=True, exist_ok=True)

    supported_extensions = ['.jpg', '.jpeg', '.png', '.mp4', '.mov', '.avi', '.mkv', '.heic']
    
    for file_path in src_folder.iterdir():
        if file_path.is_file() and file_path.suffix.lower() in supported_extensions:
            # For photos, prioritize EXIF metadata. For videos, use the modified date.
            date_taken = get_photo_date_taken(file_path) or get_file_modified_date(file_path)
            if date_taken:
                folder_name = date_taken.strftime('%B %Y')
                target_folder = dest_folder / folder_name
                target_folder.mkdir(parents=True, exist_ok=True)
                file_path.rename(target_folder / file_path.name)

# Example usage:
organize_files_by_month('Input Folder', 'Output Folder')

