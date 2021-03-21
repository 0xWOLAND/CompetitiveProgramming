# -*- coding: utf-8 -*-
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.common.exceptions import NoSuchElementException
from creds import Username, Password
from time import sleep
PATH = "/home/bhargav/chromedriver"
Phantom_PATH = "/home/bhargav/phantomjs" 
"""
To enable firebug extention
fp = webdriver.FirefoxProfile()
fp.add_extension(extension='firebug-2.0.8.xpi')
fp.set_preference("extensions.firebug.currentVersion", "2.0.8") #Avoid startup screen
driver = webdriver.Firefox(firefox_profile=fp)
"""

driver = webdriver.PhantomJS(Phantom_PATH)
driver.get("http://www.codeforces.com/contests")
assert "Codeforces" in driver.title
elem = WebDriverWait(driver, 10).until(
EC.presence_of_element_located((By.CSS_SELECTOR, "div.lang-chooser"))
)

def login():
    handle = Username() 
    password = Password() 
    elem=driver.find_element_by_link_text('Enter').click()
    #handle_elem = WebDriverWait(driver, 10).until(
    #EC.presence_of_element_located((By.NAME, "Handle/Email"))
    #)
    #handle_elem.send_keys(handle)
    sleep(3)
    driver.find_element_by_name('handleOrEmail').send_keys(handle)
    driver.find_element_by_name('password').send_keys(password)
    driver.find_element_by_class_name('submit').submit()
print(elem.text)
if 'Enter' in elem.text :
    login()

try:
    sleep(2)
    while True:
        elem=driver.find_element_by_class_name("datatable")
        elem.find_element_by_partial_link_text('Register').click()
        elem = WebDriverWait(driver, 10).until(
        EC.presence_of_element_located((By.CSS_SELECTOR, "input.submit"))
        )
        elem.submit()
   #     elem = WebDriverWait(driver, 10).until(
   #     EC.presence_of_element_located((By.CSS_SELECTOR, "div.lang-chooser"))
   #     )
except NoSuchElementException :
    print("No contests to sign up for...")
    pass
finally:
    print('All Done.')
sleep(3)

#driver.close()
