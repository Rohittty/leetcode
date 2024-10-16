# Write your MySQL query statement below
Select a.user_id,round(avg(CASE
    WHEN b.action ="timeout" THEN 0
    WHEN b.action ="confirmed" THEN 1
    ELSE 0
END),2) as confirmation_rate
from Signups a
left join Confirmations b on a.user_id = b.user_id
group by 1