SELECT 
    s.user_id,
    ROUND(
        COALESCE(
            COUNT(CASE WHEN c.action = 'confirmed' THEN 1 END)
            / NULLIF(COUNT(c.action), 0),
            0
        ),
        2
    ) AS confirmation_rate
FROM Signups AS s
LEFT JOIN Confirmations AS c
    ON s.user_id = c.user_id
GROUP BY s.user_id;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna