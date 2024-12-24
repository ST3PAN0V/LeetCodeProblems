SELECT name as Customers FROM Customers
WHERE Customers.ID NOT IN (SELECT customerID FROM Orders);