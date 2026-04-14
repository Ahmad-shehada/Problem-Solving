***
<h1 style = "border-bottom: none ; color : ";> Read And Print Full Name Problem </h1>

***

## Function Specification
* **Description** : This problem **reads** and **prints** full name in the **console**.
* **Input** : **None**.
* **Output** : **None** (Procedure only)

**Note** : We use the Function **[PrintFullName](../01_PrintFullName/README.md)** in the previous problem **(Reusability)**. <br>
We use getline in the string library to avoid a problem of take data in the buffer. <br>
Call by **Const Reference** was explained in [PrintFullName Problem](../01_PrintFullName/README.md)

## Pseudocode

```text
Function ReadFullName(ConstByRef Message)
	Print Message
	Read FullName
	Return FullName
End Function

Function ReadAndPrintFullName()
	Set FullName = ReadFullName(ConstByRef Message)
	Call PrintFullName(FullName)
End Function
```

## Flowchart

![ReadAndPrintFullName](FlowChart-ReadAndPrintFullName.svg)
![ReadAndPrintFullName](FlowChart-ReadFullName.svg)

## Usage
* **Run** [main.cpp](main.cpp) to see the output in the **console**
***