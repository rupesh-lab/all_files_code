import pandas as pd
import matplotlib.pyplot as plt

# Read the CSV file
data = pd.read_csv("stock_data.csv")

# Plot the cost of 1 stock over time
plt.plot(data.index, data['Cost_of_1_stock'], marker='o')
plt.title("Cost of 1 Stock Over Time")
plt.xlabel("Transaction Number")
plt.ylabel("Cost of 1 Stock")
plt.grid(True)
plt.show()


