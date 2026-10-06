SELECT 
    r.contest_id,
    ROUND(
        COUNT(r.user_id) * 100.0 / (SELECT COUNT(*) FROM Users),
        2
    ) AS percentage
FROM Register AS r
GROUP BY r.contest_id
ORDER BY percentage DESC, r.contest_id ASC;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna