package strings

import (
	"reflect"
	"testing"
)

func TestRunningSum(t *testing.T) {
	tests := []struct {
		s    []byte
		want []byte
	}{
		{[]byte{'h', 'e', 'l', 'l', 'o'}, []byte{'o', 'l', 'l', 'e', 'h'}},
		{[]byte{'H', 'a', 'n', 'n', 'a', 'h'}, []byte{'h', 'a', 'n', 'n', 'a', 'H'}},
	}

	for i, item := range tests {
		reverseString(item.s)
		if !reflect.DeepEqual(item.s, item.want) {
			t.Fatalf("Failed test case %d. Want %#v got %#v", i+1, item.want, item.s)
		}
		t.Logf("Passed %d test", i+1)
	}
}
