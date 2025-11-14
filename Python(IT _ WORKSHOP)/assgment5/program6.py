# F
months = ["January","February","March","April","May","June",
          "July","August","September","October","November","December"]

date = input("Enter date (mm/dd/yyyy): ")
mm, dd, yy = date.split("/")
mm = int(mm)
print(f"{months[mm-1]} {int(dd)}, {yy}")
