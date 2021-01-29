package main


import (
	"fmt"
	"bufio"
	"os"
	"strings"
	"sort"
)


func search(find string,arr []string) (int){
	n := len(arr)
	arrT := make([]string,n) 
	copy(arrT,arr)
	sort.Strings(arrT)
	for i, data := range arrT{
		if find == data{
			return i
		}
	}
	return n
}

func countSort(arr []string) {
	n := len(arr)
	finalIndex := make([]int,n) 
	
	 for i,data := range arr {
		new := arr[0:i+1]
		search := search(data,new) + 1
		finalIndex[i] = search
	 }
	 for _,data :=range finalIndex{	 fmt.Println(data) }
}


func main() {

	var n int

	reader := bufio.NewReader(os.Stdin)

	fmt.Scanf("%v",&n)

	arr := make([]string,n)
	

	for i:=0;i<n;i++ {
		name,_ := reader.ReadString('\n')
		arr[i] = strings.TrimSuffix(name, "\r\n")
	}
	countSort(arr)
}