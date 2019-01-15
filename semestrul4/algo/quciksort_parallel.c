void swap(int array[], int left, int right)
{
	int temp;
	temp = array[left];
	array[left] = array[right];
	array[right] = temp;
}

int partition(int array[], int left, int right, int pivot_index)
{
	int pivot_value = array[pivot_index];
	int index = left;
	int i;

	swap(array, pivot_index, right);
	for (i = left; i < right; i++)
		if (array[i] <= pivot_value) {
			swap(array, i, index);
			index++;
		}
	swap(array, index, right);
	return index;
}

void quicksort(int array[], int left, int right)
{
	int pivot_index = left;
	int pivot_new_index;

	int lchild = -1;
	int rchild = -1;

	if (right > left) {
		int status;
		pivot_new_index = partition(array, left, right, pivot_index);

		lchild = fork();
		if (lchild == 0) {
			quicksort(array, left, pivot_new_index - 1);
			exit(0);
		} else {
			rchild = fork();
			if (rchild == 0) {
				quicksort(array, pivot_new_index + 1, right);
				exit(0);
			}
		}
		waitpid(lchild, &status, 0);
		waitpid(rchild, &status, 0);
	}
}