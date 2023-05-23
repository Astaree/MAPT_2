# Exercise 8_1: Temperature Conversion
temperature = input("Enter the temperature (e.g., 21C or 70F): ")
# Extract the numerical value and scale from the input
value = float(temperature[:-1]) # Extract all but the last character
scale = temperature[-1] # Extract the last character
converted_temperature = None
if scale == 'C':
    converted_temperature = (value * 9/5) + 32
    converted_scale = 'F'
elif scale == 'F':
    converted_temperature = (value - 32) * 5/9
    converted_scale = 'C'
if converted_temperature is not None:
    print(f"The converted temperature is: {converted_temperature}{converted_scale}")
# Exercise 8_2: Season Name
day_number = int(input("Enter the day number: "))
month_number = int(input("Enter the month number: "))
season = None
if (month_number == 1 and day_number >= 1) or (month_number == 2 and day_number <= 28):
    season = "Winter"
elif (month_number == 3 and day_number >= 1) or (month_number == 4 and day_number <= 30):
    season = "Spring"
elif (month_number == 5 and day_number >= 1) or (month_number == 6 and day_number <= 30):
    season = "Summer"
elif (month_number == 7 and day_number >= 1) or (month_number == 8 and day_number <= 31):
    season = "Autumn"
elif (month_number == 9 and day_number >= 1) or (month_number == 10 and day_number <= 31):
    season = "Autumn"
elif (month_number == 11 and day_number >= 1) or (month_number == 12 and day_number <= 31):
    season = "Winter"
if season is not None:
    print(f"The season for the given date is: {season}")