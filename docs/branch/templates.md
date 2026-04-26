# Header Templates: dev

## Subsystem Template

```cpp
#pragma once
#include <frc2/command/SubsystemBase.h>

class MySubsystem : public frc2::SubsystemBase {
 public:
  MySubsystem();
  void Periodic() override;
};
```

## Command Template

```cpp
#pragma once
#include <frc2/command/Command.h>
#include <frc2/command/CommandHelper.h>

class MyCommand : public frc2::CommandHelper<frc2::Command, MyCommand> {
 public:
  explicit MyCommand(MySubsystem* subsystem);
  void Initialize() override;
  void Execute() override;
  void End(bool interrupted) override;
  bool IsFinished() override;
};
```
