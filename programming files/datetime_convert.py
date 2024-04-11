from datetime import datetime

# initialize the date as a string
date_str = "2022-03-17 10:45:30"

# create a date object 
date_obj = datetime.strptime(date_str, '%Y-%m-%d %H:%M:%S')

# create a formatted date of the date object 
formatted_date = date_obj.strftime('%m/%d/%Y %H:%M:%S')

# display the formatted date to user
print(formatted_date)
