package main
import (
	"fmt"
	"time"
)
func main(){
	start:=time.Now().UnixNano()
	a:=10
	b:=80
	fmt.Printf("a:%d b:%d\n",a,b)
	a=a+b
	b=a-b
	a=a-b
	fmt.Printf("a:%d b:%d\n",a,b)
	end:=time.Now().UnixNano()
	fmt.Println(end-start)
}