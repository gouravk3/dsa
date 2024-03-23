package array

import "math"

func maxProfit(prices []int) int {
	var maxProfit int
	buyPrice := math.MaxInt

	for _, currentPrice := range prices {
		if currentPrice < buyPrice {
			buyPrice = currentPrice
		}

		currentProfit := currentPrice - buyPrice
		if currentProfit > maxProfit {
			maxProfit = currentProfit
		}
	}

	return maxProfit
}
