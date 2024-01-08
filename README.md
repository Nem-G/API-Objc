# API-Objc
API Support IOS Jailbreak or No Jailbreak 
Có Các Chức Năng API Đi Kèm Theo Menu 3 Ngón
<div style="text-align: center;">
<b>Template Preview</b><br>

<img src="https://raw.githubusercontent.com/Nem-G/API-Objc/main/IMG_6050.PNG">
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

- Chức Năng GIF loading sau 3 giây sẽ kết thúc
```obj-c
[nemg loading:^{
 bọc chức năng kết thúc loading để ở đây
 }];
```
- Chức Năng Share ACC LIÊN QUÂN Miễn Phí CÓ HƠN 10K TÀI KHOẢN
```obj-c
[nemg shareacclienquan:^(NSString *result) {
     // Hiển thị kết quả trên label hoặc alert
     NSLog(@"%@", result); // hoặc set text cho label, hiển thị alert, tùy thuộc vào nhu cầu của bạn
 }];
```
- Share Ảo của Facebook/ Token Setup ở [Đây](https://github.com/Nem-G/API-Objc/blob/main/API/nemg.h#L33-L34)
```obj-c
[nemg shareaofacebook:@"your_facebook_link" completion:^(NSString *result) {
     // Handle the result here, for example, update a label or show an alert
     NSLog(@"Result: %@", result);
 }];
```
- Xem Rate Tỉ Lệ Thắng    
- 90: tỉ lệ thắng hiện tại của bạn
- 99: tỉ lệ thắng bạn mong muốn
- 1000: số trận hiện taị của bạn
```obj-c
      NSString *result = [nemg rateaov:@"90" winNeed:@"99" n:@"1000"];
       NSLog(@"%@", result);
```
- Check xem VPN có hoạt động hay không
```obj-c
 BOOL isVPNConnected = [nemg isVPNConnected];
 NSLog(@"Is VPN connected: %@", isVPNConnected ? @"Yes" : @"No");

```
- Anti Dữ Liệu Mạng,có thể bật tắt được ngay
```obj-c
 [nemg AntiBlocking:NO];//đây là không bật
 [nemg AntiBlocking:YES];//đây là có bật
```
- Hiện Thanh FPS 7 Màu Theo Ý Muốn
```obj-c
 [nemg ShowFPS:NO];//không hiện
 [nemg ShowFPS:YES];// có hiện
```
- Đường Dẫn tới Document Của Ứng 
```obj-c
NSString * Document = [nemg getDocPath];

```
- Hiện Thanh FPS 7 Màu Nhưng Ẩn Khi Quay Video Màn Hình phải sử dụng ShowFPS.
```obj-c
 [nemg ShowFPS_Hacker:NO];//có hiện khi chụp màn hình quay video
 [nemg ShowFPS_Hacker:YES];// không hiện khi chụp màn hình quay video

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
