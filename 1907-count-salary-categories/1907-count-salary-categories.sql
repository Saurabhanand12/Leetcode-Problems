select 
'Low Salary' as category,
count(*) as accounts_count
from Accounts
where income < 20000

union all

select 
'Average Salary' as category,
count(*) as accounts_count
from Accounts
where income >= 20000 AND income <= 50000

union all

select 
'High Salary' as category,
count(*) as accounts_count
from Accounts
where income > 50000



-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna