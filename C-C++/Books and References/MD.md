In this file we will use ```move```, ```copy```, and ```xcopy```  
  
**1. To move folder 1 in folder 2:**  
```move "C:\Users\hamza\Downloads\1" "C:\Users\hamza\Downloads\2"```

**2. To move all photo and video files from folder Files to Photos_Videos:**  
This will include Files folder and all it's sub folder too.  
```for /r C:\Users\hamza\Dowloads\Files %f in (*.jpg, *.mp4, *.png, *.jpeg, *.gif, *.tiff, *.psd, *.raw, *.m4v, *.mov, *.avi, *.mkv, *.hevc) do @move "%f" "C:\Users\hamza\Dowloads\Photos_Videos"```


