# Write your MySQL query statement below
select date_id , make_name , 
count(distinct lead_id) as unique_leads,
count(distinct partner_id) as unique_partners
from DailySales 
group by date_id,make_name
order by date_id;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna