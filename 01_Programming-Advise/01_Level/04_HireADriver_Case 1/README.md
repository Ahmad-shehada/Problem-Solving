***
<h1 style = "border-bottom: none ; color : ";> Hire a Driver_Case 1 Problem </h1>

***

## Function Specification
### 1.ReadShort(const string& Message) *Generic Function (MyInput.h Library)*
* **Description** : This function **displays** a message and **prompts** the user to enter an short number
* **Input** : **Message**(String) - *Pass by Const Reference*
* **Output** : **short**

### 2.ReadBoolean(const string& Message) *Generic Function (MyInput.h Library)*
* **Description** : This function **displays** a message and **prompts** the user to enter an boolean
* **Input** : **Message**(String) - *Pass by Const Reference*
* **Output** : **boolean**

### 3.isAccepted(short Age, bool HasDrivingLicense)
* **Description** : This function **returns** true **if** all conditions are true **otherwise** return false
* **Input** : Age(short), HasDrivingLicense(boolean)

**Note** : Call by **Const Reference** was explained in **[PrintFullName](../01_PrintFullName/README.md)** problem

## Pseudocode
```text
Function ReadShort(ConstByRef Message)
  Print Message
  Read Num
  Return Num
End Function
```
