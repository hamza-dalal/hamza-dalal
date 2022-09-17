#%% Installing and importing modules

from bs4 import BeautifulSoup
import requests
import csv

#%% 1 Page Scraping
#url = "https://www.contractsfinder.service.gov.uk/Search/Results"
 
def Scraper():
    url = "https://www.contractsfinder.service.gov.uk/Search/Results"
    file = "scraper.csv"
    f = open(file,'w',newline = '')
    g = csv.writer(f)
    header = ["Title", "Organization"]
    g.writerow(header)
    html = requests.get(url)
    soup = BeautifulSoup(html.content)
    tendors = soup.find_all("div", class_ = "search-result")
    for tendor in tendors:
        title = tendor.find("div", class_ = "search-result-header").a.text
        l=[title]
        g.writerow(l)
    f.close()

Scraper()

#%% Final whole data scraping

def Scraper():
    url = "https://www.contractsfinder.service.gov.uk/Search/Results"
    file = "scraper.csv"
    f = open(file,'w', newline = '', encoding="utf-8")
    g = csv.writer(f)
    header = ["Title", "Organization", "Desc", "Procurement Stage"]
    g.writerow(header)
    i = 1
    while True:
        url1 = url + "?&page="+str(i)+"#dashboard_notices"
        i=i+1
        html = requests.get(url1)
        if html.status_code != 200:
            break
        soup = BeautifulSoup(html.content)
        tendors = soup.find_all("div", class_ = "search-result")
        for tendor in tendors:
            title = tendor.find("div", class_ = "search-result-header").a.text
            org = tendor.find("div", class_ = "search-result-sub-header wrap-text").text
            desc = tendor.find("div", class_ = "wrap-text").findNext("div", class_ = "wrap-text").text
            proc = tendor.find("div", class_ = "search-result-entry").find(text=True, recursive=False).text
            x = [title, org, desc, proc]
            g.writerow(x)
        i=i+1
    f.close()

Scraper()
