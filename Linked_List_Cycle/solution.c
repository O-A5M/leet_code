#include <stdbool.h>

struct	ListNode
{
	int				val;
	struct ListNode	*next;
};

bool	hasCycle(struct ListNode *head)
{
	int	count;

	count = 0;
	if (!head)
		return (false);
	while (head && count < 10001)
	{
		if (!head->next)
			return (false);
		head = head->next;
	}
	return (true);
}
