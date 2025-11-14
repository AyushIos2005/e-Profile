import pandas as pd

# 1 & 2. Read the CSV file
sal = pd.read_csv("Salaries.csv")

# 3. Display the first few rows
print("\n--- HEAD OF DATASET ---")
print(sal.head())

# 4. Dataset info
print("\n--- INFO ---")
sal.info()

# 5. Average BasePay
print("\nAverage BasePay:", sal['BasePay'].mean(skipna=True))

# 6. Highest OvertimePay
print("\nHighest OvertimePay:", sal['OvertimePay'].max())

# 7. Job title of JOSEPH DRISCOLL
emp = sal[sal['EmployeeName'] == 'JOSEPH DRISCOLL']

if not emp.empty:
    print("\nJob title of JOSEPH DRISCOLL:", emp['JobTitle'].values[0])
else:
    print("Employee not found.")

# 8. Total pay (including benefits) of JOSEPH DRISCOLL
if not emp.empty:
    print("Total Pay (with benefits):", emp['TotalPayBenefits'].values[0])

# 9. Highest paid person
highest = sal.loc[sal['TotalPayBenefits'].idxmax()]
print("\nHighest paid person:", highest['EmployeeName'])

# 10. Lowest paid person
lowest = sal.loc[sal['TotalPayBenefits'].idxmin()]
print("Lowest paid person:", lowest['EmployeeName'])

# 11. Average BasePay per year
print("\nAverage BasePay per year:")
print(sal.groupby('Year')['BasePay'].mean())

# 12. Number of unique job titles
print("\nUnique job titles:", sal['JobTitle'].nunique())

# 13. Top 5 most common jobs
print("\nTop 5 common jobs:")
print(sal['JobTitle'].value_counts().head(5))

# 14. Job Titles represented by only one person in 2013
one_person_2013 = sal[sal['Year'] == 2013]['JobTitle'].value_counts()
print("\nJob Titles with only one person in 2013:", (one_person_2013 == 1).sum())

# 15. People with 'Chief' in job title
chief_count = sal[sal['JobTitle'].str.contains('Chief', case=False, na=False)].shape[0]
print("\nPeople with 'Chief' in job title:", chief_count)

# 16. Correlation between length of Job Title and Total Pay
sal['title_len'] = sal['JobTitle'].apply(lambda x: len(str(x)))

print("\nCorrelation between Job Title length and TotalPayBenefits:")
print(sal[['title_len', 'TotalPayBenefits']].corr())
