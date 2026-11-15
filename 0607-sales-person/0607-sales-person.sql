SELECT sp.name
FROM SalesPerson AS sp
WHERE sp.sales_id NOT IN (
    SELECT o.sales_id
    FROM Orders AS o
    JOIN Company AS cp
        ON cp.com_id = o.com_id
    WHERE cp.name = 'RED'
);

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna