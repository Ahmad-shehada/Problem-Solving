***
<h1 style = "border-bottom: none ; color : ";> Even Or Odd Problem </h1>

***

## Function Specification
### 1.ReadInt(const string& Message) *Generic Function (MyInput.h Library)*
* **Description** : To show details press on [**ReadInt**](https://github.com/Ahmad-shehada/My-Cpp-Libreries/blob/main/Documentation/MyInput/ReadInt)

### 2.isEven(int Num) *Generic Function (MyMath.h Library)*
* **Description** : To show details press on [**isEven**](https://github.com/Ahmad-shehada/My-Cpp-Libreries/blob/main/Documentation/MyMath/isEven)
	
### 3.PrintEvenOrOdd(int Num)
* **Description** : This procedure **prints** "Even"" to the console **if** the given **number** is Even **otherwise** prints "Odd""
* **Input** : **Num**(int)
* **Output** : **None** (Procedure only)


## Pseudocode
```text
Procedure PrintEvenOrOdd(Num)
  if isEven(Num) Then
    Print Even
  else
    Print Odd
End Procedure
```
```text
Execution Flow
  Set Num = ReadInt(Message)
  Call PrintEvenOrOdd(Num)
End Flow
```

## Flowchart

![FlowChart-ReadInt](FlowChart/FlowChart-ReadInt.svg)
![FlowChart-isEven](FlowChart/FlowChart-isEven.svg)
![FlowChart-PrintEvenOrOdd](FlowChart/FlowChart-PrintEvenOrOdd.svg)
![FlowChart-Execution Flow](FlowChart/FlowChart-ExecutionFlow.svg)

## Usage
* **Run** [main.cpp](main.cpp) to see the **program's output** in the **console**
***