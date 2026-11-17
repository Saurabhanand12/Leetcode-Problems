SELECT
    u.name,
    SUM(t.amount) AS balance
FROM Users AS u
JOIN Transactions AS t
    ON u.account = t.account
GROUP BY u.account, u.name
having balance > 10000
ORDER BY balance DESC


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna