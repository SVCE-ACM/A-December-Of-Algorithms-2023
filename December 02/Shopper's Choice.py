# Importing statistics package
import statistics

# Reading the number of products from user
n = int(input("Enter the number of the products: "))

# Initializing product, distinct and frequency_product lists
product = []
distinct = []
frequency_product = []

# For loop to retrieve the product id
for i in range(0, n, 1):
    # Reading the product id from the user
    print("Enter the product id: ", end=" ")
    product_id = int(input())

    # Appending the product id from user
    product.append(product_id)

# For loop to traverse product list
for i in product:

    # If an element exists in distinct list
    if i in distinct:

        # If the condition is true, then perform no operation
        pass

    # Else if an element does not exist in distinct list
    else:

        # If the condition is true, then append the element to distinct list
        distinct.append(i)

# For loop to traverse the distinct list
for i in distinct:

    # Appending the count of each product id to frequency_product list
    frequency_product.append(product.count(i))

# frequency_product is displayed
print(frequency_product)
