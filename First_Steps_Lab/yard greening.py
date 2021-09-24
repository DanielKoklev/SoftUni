square_meters = float(input())

# price for 1 sq meter is 7.61 lv with VAT
# there is 18% discount available because of the very big yard
one_sq_m = 7.61

whole_yard = square_meters * one_sq_m

discount = 0.18 * whole_yard

whole_yard_after_discount = whole_yard - discount

print("The final price is: " + str(whole_yard_after_discount) + " lv.")
print("The discount is: " + str(discount) + " lv.")
