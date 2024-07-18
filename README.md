# API-Objc
API Support IOS Jailbreak or No Jailbreak 
Có Các Chức Năng API Đi Kèm Theo Menu 3 Ngón



<div style="text-align: center;">
<b>Template Preview</b><br>
<div class="carousel">
    <img src="https://raw.githubusercontent.com/Nem-G/API-Objc/main/IMG_6050.PNG" alt="Image 1">
    <img src="https://raw.githubusercontent.com/Nem-G/API-Objc/main/image/IMG_3434.PNG" alt="Image 2">
    <img src="https://raw.githubusercontent.com/Nem-G/API-Objc/main/image/IMG_3435.PNG" alt="Image 3">
    <img src="https://raw.githubusercontent.com/Nem-G/API-Objc/main/image/IMG_3436.PNG" alt="Image 4">
    <img src="https://raw.githubusercontent.com/Nem-G/API-Objc/main/image/IMG_3437.PNG" alt="Image 5">
    <img src="https://raw.githubusercontent.com/Nem-G/API-Objc/main/image/IMG_3438.PNG" alt="Image 6">
    <img src="https://raw.githubusercontent.com/Nem-G/API-Objc/main/image/IMG_3439.PNG" alt="Image 7">
    <img src="https://raw.githubusercontent.com/Nem-G/API-Objc/main/image/IMG_3440.PNG" alt="Image 8">
</div>
</div>


# About
- API Tích Hợp Các Chức Năng
- Tích Hợp Menu 3 Tap
# Installation
- Using theos for compilation
- Add ```@@Tweak_Name@@_LDFLAGS += API/libnemg.a``` Vào Project Của 

# Usage
**3 Ngón Tap Vào Màn Hình Để Mở Menu*
Edit Tại Trong [`IGGMain.mm`](IGGMain.mm)

- Chức Năng Đăng Nhập Key Từ Sever Dash.thenamk3.net
- Set Token Package
```obj-c
[NemG Package_token:NSSENCRYPT("your token")];
//gettoken lên dash.thenamk3.net ở package 
```
- Set Version Package
```obj-c
 [NemG Package_version:@"1.0"];
//version phải trùng khớp với sever không sẽ báo update
```
- Get UDID
```obj-c
 NSString *udid = [NemG GetUDID];
//Get Thông Tin UDID đăng Nhập Của Bạn
```
- Get Text Sever
```obj-c
 NSString *textServer = [NemG getTextSever];
//Get lấy text từ sever bạn đặt 
```
- Get Info Login
```obj-c
 NSString *loginInfo = [NemG getLoginInfo];
 NSLog(@"Login Info: %@", loginInfo);
//Get Thông tin login IP,Thành Phố,Mã ZIp...
```
- Get Url Icon
```obj-c
NSString *urlIcon = [NemG getUrlIcon];
 NSLog(@"URL Icon: %@", urlIcon);
//Get Url Hình Ảnh Bạn Set ở Sever
```
- Get Key Login
```obj-c
NSString *keyLogin = [NemG GetKeyLogin];
 NSLog(@"Key Login: %@", keyLogin);
//Get Key đăng Nhập của bạn
```
 
- Hàm Key Login Nếu Bạn Thích Các Chức năng trong Package
```obj-c
[NemG KeyListen:NSSENCRYPT("NemGVn-year-H4ELU0I1OAZMB76J")];
```


- Chức Năng GIF loading sau 3 giây sẽ kết thúc
```obj-c
[nemg loading:^{
 bọc chức năng kết thúc loading để ở đây
 }];
```


- Check xem VPN có hoạt động hay không
```obj-c
 BOOL isVPNConnected = [nemg isVPNConnected];
 NSLog(@"Is VPN connected: %@", isVPNConnected ? @"Yes" : @"No");

```


- Đường Dẫn tới Document Của Ứng 
```obj-c
NSString * Document = [nemg getDocPath];

```

- Dowload Zip Và Unzip
```obj-c
  [nemg downloadZipandUzip:@"https://example.com/yourfile.zip" path:@"yourDestinationPath" completion:^(BOOL success) {
     if (success) {
         // Thực hiện  tải xuống và giải nén thành công
     } else {
         // Thực hiện  tải xuống hoặc giải nén thất bại
     }
 }];
```
- dowload tệp file bất kì mà không phải zip
```obj-c
       
 BOOL downloadSuccess = [nemg downloadLink:@"https://example.com/yourfile.bytes" toPath:@"yourDestinationPath"];
 if (downloadSuccess) {
     // Thực hiện khi tải xuống thành công
 } else {
     // Thực hiện khi tải xuống thất bại
 }
```
- Xoá Toàn Bộ Data Mà Không Cần Tải lại Game
```obj-c
       
[nemg cleanAllData];
```
- Gửi thông báo tới Người Dùng Qua Webhook Discord
```obj-c
       
 NSString *content = @"Nội dung bạn muốn gửi đến Discord";
      NSString *webhookURL = @"URL Discord mới bạn muốn sử dụng";
 
      [nemg callDiscord:content webhookURL:webhookURL];
```
- Gửi thông báo tới Người Dùng Qua Webhook Telegram
```obj-c
       
 NSString *content = @"Nội dung bạn muốn gửi đến Telegram";
 NSString *botToken = @"1964411112:AAGZr6oy1HcqMnnh6L6WF8xbceBAF0Ws2oM";
 NSString *chatID = @"1245157878";
 
 [nemg sendTelegram:content botToken:botToken chatID:chatID];
```
- Gửi Thông Báo email
```obj-c
[nemg sendEmailWithSubject:@"subject" content:@"content" to:@"gmail" completion:^(NSString *result) {
     NSLog(@"%@", result);
     // Xử lý kết quả ở đây
 }];
```

# Author Lỗi Gì Contact Bên Dưới
- Nem'G [Github](https://github.com/Nem-G)
- Nem'G [Facebook](https://fb.com/user.nemg)
- Nem'G [Telegram](https://t.me/thenamk3)
- Nem'G [Zalo](https://zalo.me/thenamk3)
# Mọi ý tưởng và lỗi ở trên gửi về contact trên
