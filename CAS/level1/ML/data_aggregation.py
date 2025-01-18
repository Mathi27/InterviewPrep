import pandas as pd

# I have a sample data:
data = {
    'Product': ['Apple', 'Banana', 'Apple', 'Orange', 'Banana', 'Orange', 'Apple'],
    'Price': [1.2, 0.5, 1.3, 0.8, 0.4, 0.9, 1.1],
    'Quantity': [10, 20, 15, 7, 25, 10, 30]
}

# dataframe creation
df = pd.DataFrame(data)

# Print the original dataset
print("Original dataset:")
print(df)

# Let's perform the aggregation by grouping the dataset by 'Product' and summing the 'Price' and 'Quantity' columns.
# The aggregation is performed using the agg() method and passing a dictionary to the groupby() method.
groupedData = df.groupby('Product').agg({'Price':'mean','Quantity':'sum'})

# print the aggredated data
print("Aggregated dataset:")
print(groupedData)