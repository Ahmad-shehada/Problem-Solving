***
<h1 style = "border-bottom: none ; color : ";> Read And Print Full Name Problem </h1>

***

## Function Specification
### 1.ReadString(const string& Message) - *Generic Function (MyInput.h Library)*
* **Description** : This function **reads** String
* **Input** : **Message**(String) - *Pass by Const Reference*
* **Output** : **String**


### 2.PrintFullName(const string& FullName)
* **Description** : This Function was **explianed** in **[PrintFullName](../01_PrintFullName/README.md)** *(Reusability)*

**Note** : We use **getline** in the string library to **avoid** a problem of take data in the buffer. <br>
Call by **Const Reference** was explained in [PrintFullName](../01_PrintFullName/README.md) problem

## Pseudocode

```text
Function ReadString(ConstByRef Message)
  Print Message
  Read String
  Return String
End Function

Execution Flow
  Set FullName = ReadString(Message)
  Call PrintFullName(FullName)
End Flow
```

## Flowchart

![FlowChart-ExecutionFlow](FlowChart-ExecutionFlow.svg)
![FlowChart-ReadString](FlowChart-ReadString.svg)

## Usage
* **Run** [main.cpp](main.cpp) to see the **program's output** in the **console**
***