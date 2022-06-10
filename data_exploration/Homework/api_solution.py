chossed api ->https://rapidapi.com/referential/api/referential/
Referential API Documentation

link : https://referential.p.rapidapi.com/v1/city
query params : 
	fields : iso_a2,state_code,state_hasc,timezone,timezone_offset
	
headers : 
	x-rapidapi-host : referential.p.rapidapi.com
	'x-rapidapi-key': 39a3690cfcmsha7ca0e72c5f4a6ep124bc6jsne2de3fe4b0b7
	
read it and convert it to csv file using python pandas	
import pandas as pd

df = pd.read_json(r'response.json')
df.info()
df.to_csv('response.csv')
