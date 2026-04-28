***
<h1 style = "border-bottom: none ; color : ";> Read And Print Full Name Problem </h1>

***

## Function Specification
### 1.ReadString(const string& Message) - *Generic Function (MyInput.h Library)*
* **Description** : This function **displays** a message and **prompts** the user to enter a String
* **Input** : (**Message**(String), **MessageError**(String)) - *Pass by Const Reference*
* **Output** : **String**


### 2.PrintFullName(const string& FullName)
* **Description** : This procedure was **explianed** in **[PrintFullName](../01_PrintFullName/README.md)** *(Reusability)* 

**Note** : We use **getline** in the string library to **avoid** a problem of take data in the buffer. <br>
Call by **Const Reference** was explained in **[PrintFullName](../01_PrintFullName/README.md)** problem

## Pseudocode

```text
Function ReadString(ConstByRef Message, ConstByRef MessageError)
  Print Message
  Set Text = GetValidInput(MessageError)
  Return Text
End Function
```
```text
Execution Flow
  Set FullName = ReadString(Message)
  Call PrintFullName(FullName)
End Flow
```

**Note** : This function uses [GetValidInput]() in [MyInput.h ]() Library

## Flowchart

![FlowChart-ExecutionFlow](FlowChart-ExecutionFlow.svg)
![FlowChart-ReadString](FlowChart-ReadString.svg)

## Usage
* **Run** [main.cpp](main.cpp) to see the **program's output** in the **console**
***