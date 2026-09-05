# Write your MySQL query statement below
select id,
sum(CASE WHEN month = 'Jan' THEN revenue ELSE NULL END) as Jan_Revenue,
sum(CASE WHEN month = 'Feb' THEN revenue ELSE NULL END) AS Feb_Revenue,
sum(CASE WHEN month = 'Mar' THEN revenue ELSE NULL END) as Mar_Revenue,
sum(CASE WHEN month = 'Apr' THEN revenue ELSE NULL END) AS Apr_Revenue,
sum(CASE WHEN month = 'May' THEN revenue ELSE NULL END) as May_Revenue,
sum(CASE WHEN month = 'Jun' THEN revenue ELSE NULL END) AS Jun_Revenue,
sum(CASE WHEN month = 'Jul' THEN revenue ELSE NULL END) as Jul_Revenue,
sum(CASE WHEN month = 'Aug' THEN revenue ELSE NULL END) AS Aug_Revenue,
sum(CASE WHEN month = 'Sep' THEN revenue ELSE NULL END) as Sep_Revenue,
sum(CASE WHEN month = 'Oct' THEN revenue ELSE NULL END) AS Oct_Revenue,
sum(CASE WHEN month = 'Nov' THEN revenue ELSE NULL END) as Nov_Revenue,
sum(CASE WHEN month = 'Dec' THEN revenue ELSE NULL END) AS Dec_Revenue
from Department 
group by id;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna