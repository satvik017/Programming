Comp=int(input("Enter The Computer marks= "))
Eng=int(input("Enter the English marks= "))
Math=int(input("Enter the Maths marks= "))
Sci=int(input("Enter the Physics marks= "))
Lab=int(input("Enter the Practical marks= "))

Tmarks=Comp+Eng+Math+Sci+Lab
print("Total marks is ",Tmarks)
Per=Tmarks/5;
print("Percetange is", Per)

if(Comp<33 or Eng<33 or Math<33 or Sci<33 or Lab<33):
	print("\"Fail\"")
else:
	print("\"Pass\"")
