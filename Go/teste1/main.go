package main

import "fmt"

type Person struct {
	Name   string
	Age    int
	Height float64
}

func (p Person) Apresentation() {
	fmt.Printf("My name is %s I have %d years old and have %.2f tall", p.Name, p.Age, p.Height)
}

func (p *Person) ChangeName(newName string) {
	p.Name = newName
}

func main() {
	diogo := Person{
		Name:   "Diogo",
		Age:    18,
		Height: 1.70,
	}
	diogo.ChangeName("Douglas")
	diogo.Apresentation()
}
