***
<h1 style = "border-bottom: none ; color : ";> Even Or Odd Problem </h1>

***

## Function Specification
### 1.ReadInt(const string& Message) *Generic Function (MyInput.h Library)*
* **Description** : This function **displays** a message and **prompts** the user to enter an int number
* **Input** : **Message**(String) - *Pass by Const Reference*
* **Output** : **int**

### 2.isEven(int Num) *Generic Function (MyMath.h Library)*
* **Description** : This function **checks** whether a given number is Even or Odd 
*  **Input** : **Num**(int)
*  **Output** : **boolean**
	
### 3.PrintEvenOrOdd(int Num)
* **Description** : This procedure **prints** "Even"" to the console **if** the given **number** is Even **otherwise** prints "Odd""
* **Input** : **Num**(int)
* **Output** : **None** (Procedure only)

**Note** : Call by **Const Reference** was explained in **[PrintFullName](../01_PrintFullName/README.md)** problem

## Pseudocode
```text
Function ReadInt(ConstByRef Message)
  Print Message
  Read Num
  Return Num
End Function
```
```text
Function isEven(Num)
  Return (Num mod 2 == 0)
End Function
```
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