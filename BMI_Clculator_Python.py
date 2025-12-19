mass = int(input('Please Inter Your Mass : '))
height = float(input('Please Inter Your Height : '))
bmi = (mass) / (height**2)

if bmi < 18.5:
    status = 'underweight'

if bmi >= 18.5 and bmi <= 24.9:
    status = 'normal'   

if bmi >= 24.9 and bmi <= 29.9:
    status = 'overweight'   

if bmi >= 30 :
    status = 'obese'  
print('BMI VALUES \nUnderweight :   less than 18.5\nNormal :        between 18.8 and 24.9\nOverweight :    between 24.9 and 29.9\nObese :         30 or greater\nYour BMI : %.2f And You Are %s'  %(bmi , status) )

#print(f"{bmi:.2f}")