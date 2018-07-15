## 介绍

JQCPUMonitor，是一个给Qt开发的，CPU使用率检测库，目前只检测CPU整体使用率。

支持3个主要平台，Windows、macOS和Linux

返回qreal类型，0表示0%使用率，1表示100%使用率，0.5表示50%使用率，以此类推

## 使用举例

* 获取当前CPU使用率

```
JQCPUMonitor::cpuUsagePercentage()
```

* 获取5秒内平均CPU使用率

```
JQCPUMonitor::cpuUsagePercentageIn5Second()
```

* 获取30秒内平均CPU使用率

```
JQCPUMonitor::cpuUsagePercentageIn30Second();
```

## 关于这个库
本库源码均已开源在了GitHub上。

GitHub地址：https://github.com/188080501/JQCPUMonitor

方便的话，帮我点个星星，或者反馈一下使用意见，这是对我莫大的帮助。

若你遇到问题、有了更好的建议或者想要一些新功能，都可以直接在GitHub上提交Issues：https://github.com/188080501/JQCPUMonitor/issues
