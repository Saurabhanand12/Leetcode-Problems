SELECT e.employee_id,e.name,count(e.employee_id) as reports_count,
round(AVG(e1.age)) as average_age
FROM Employees AS e
JOIN Employees AS e1
ON e.employee_id = e1.reports_to
group by e1.reports_to,e.name
order by e.employee_id asc;


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna