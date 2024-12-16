package recursion

import "testing"

func Test_subsequenceSumK(t *testing.T) {
	type args struct {
		nums []int
		k    int
	}
	tests := []struct {
		name string
		args args
	}{
		{
			name: "test1",
			args: args{
				nums: []int{1, 2, 1},
				k:    2,
			},
		},
		{
			name: "test2",
			args: args{
				nums: []int{1, 2, 3, 4, 5, 6, 7, 8, 9},
				k:    8,
			},
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			subsequenceSumK(tt.args.nums, tt.args.k)
		})
	}
}
