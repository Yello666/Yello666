package main
import(
	"fmt"
)

func pp(line int){
	cur_l:=0
	for i := 0; i < line; i++ {
		cur_l++
			for k := 0; k < line-cur_l; k++ {  //每一行都先打空格，可另起一个for对打空格进行控制
				fmt.Print(" ")
			}
			for j:=0;j< cur_l*2-1;j++ {   //对第二个循环的输出次数进行控制：将计数变量在第一层循环进行操作
				if j>0&&j<cur_l*2-2&&cur_l<line&&cur_l>1 {
					fmt.Print(" ")
				} else{
				fmt.Print("*")
				}
			}
		fmt.Print("\n")
		}
}
func main(){
	var line int
	fmt.Println("please enter the line\n")
	fmt.Scanf("%d",&line)
	pp(line)
	
}