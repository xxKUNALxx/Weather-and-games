# import requests
# import sys

# import json
                

# response = requests.request("GET", "https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/london?unitGroup=us&key=H3MDC2PMTYN4ZYW4N4URQJ9SR&contentType=json")
# if response.status_code!=200:
#   print('Unexpected Status code: ', response.status_code)
#   sys.exit()  


# # Parse the results as JSON
# jsonData = response.json()
# print(jsonData)

import requests
import sys
city=input("enter the city name : ")
response = requests.request("GET", f"https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/{city}?unitGroup=metric&key=H3MDC2PMTYN4ZYW4N4URQJ9SR&contentType=json")


if response.status_code != 200:
    print('Unexpected Status code: ', response.status_code)
    sys.exit()

# Parse the results as JSON
jsonData = response.json()

# Extract and print temperature information
temperature = jsonData['currentConditions']['temp']
c = jsonData['currentConditions']['conditions']
# print(f'Temperature in {city}: {temperature} degrees Celsius {c}')

with open("data.txt" , 'w') as f:
    f.write("Tempreature: "f"{temperature}"" C")
    f.write("\nWeather status: "f"{c}")