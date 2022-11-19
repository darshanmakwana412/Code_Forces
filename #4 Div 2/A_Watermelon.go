package main

import (
	"os"
)

func main() {
	f, err := os.Open("../input.txt")
	if err != nil {
		return err
	}
}
