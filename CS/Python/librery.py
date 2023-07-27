import pandas as pd
#modules
"""
 pip install openpyxl
 pip install xlrd
"""

df = pd.read_excel("Library stock missing.xlsx")

def find_missing_numbers(df, column_name, start, end):
    all_numbers = set(range(start, end + 1))
    present_numbers = set(df[column_name])
    missing_numbers = list(all_numbers - present_numbers)
    missing_df = pd.DataFrame({column_name: missing_numbers})
    return missing_df

start = 1
end = 34390

missing_df = find_missing_numbers(df, 'Book Number', start, end)
missing_df.sort_values(by='Book Number', ascending=True, inplace=True)
print(missing_df)

missing_df.to_excel('missing_numbers.xlsx',columns = ['Book Number'])