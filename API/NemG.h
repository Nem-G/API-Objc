#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface NemG : NSObject

// Phần Này Không Yêu Cầu Keylisten Free Kết Nối Với Web
+ (void)paid:(void (^)(void))execute;
/*
 Cách sử dụng:
 [NemG paid:^{
     // Hàm Bọc Menu Khi Xác Thực Thành Công
 }];
*/
//Icon kích hoạt menu GIF Set URL trên sever web

+ (void)Package_token:(NSString *)token;
// [NemG Package_token:@"your token"];


+ (void)Package_version:(NSString *)ver;
// [NemG Package_version:@"1.0"];

//get ngày hết hạn
+ (NSString *)Getexpired;
/*
 Cách sử dụng:
 NSString *end_time = [NemG Getexpired];
 NSLog(@"Ngày Hết Hạn: %@", end_time);
*/
// Lấy UDID
+ (NSString *)GetUDID;
/*
 Cách sử dụng:
 NSString *udid = [NemG GetUDID];
 NSLog(@"UDID: %@", udid);
*/

// Lấy Text Server
+ (NSString *)getTextSever;
/*
 Cách sử dụng:
 NSString *textServer = [NemG getTextSever];
 NSLog(@"Text Server: %@", textServer);
*/

// Lấy thông tin đăng nhập
+ (NSString *)getLoginInfo;
/*
 Cách sử dụng:
 NSString *loginInfo = [NemG getLoginInfo];
 NSLog(@"Login Info: %@", loginInfo);
*/
// Lấy thông tin đăng nhập
+ (NSString *)getLoginInfo;
/*
 Cách sử dụng:
 NSString *loginInfo = [NemG getLoginInfo];
 NSLog(@"Login Info: %@", loginInfo);
*/

// Lấy URL icon
+ (NSString *)getUrlIcon;
/*
 Cách sử dụng:
 NSString *urlIcon = [NemG getUrlIcon];
 NSLog(@"URL Icon: %@", urlIcon);
*/

// Lấy Key Login
+ (NSString *)GetKeyLogin;
/*
 Cách sử dụng:
 NSString *keyLogin = [NemG GetKeyLogin];
 NSLog(@"Key Login: %@", keyLogin);
*/





//------------------------------------------//



//phần Thêm Tính Năng Yêu Cầu Keylisten Plan
+ (NSString *)KeyListen:(NSString *)key;
/*
 - Chức Năng = Xác Thực APIKEY Để Sử Dụng Chức Năng Trong Lib
 - Cách Sử Dụng:

+(void)load {
      [NemG KeyListen:@"NemG-3-hours-r6fuNLBVCIXHnQ7"]; 
}                   
  
*/
+ (void)exit;
/*
 - Chức Năng = Hiện Thông Báo Hub Button exit
 - Cách Sử Dụng:

      [NemG exit];
                        
*/
+ (void)moddata;
/*
 - Chức Năng = Mod Data Document Qua Ứng Dụng Tệp
 - Cách Sử Dụng:

      [NemG moddata];
                        
*/
+(void)videosanhlqm;
/*
 - Chức Năng = Mod Video Sảnh Thông Qua Ứng Dụng Ảnh ( Game LIên Quân Mobile )

      [NemG videosanhlqm];
                        
*/
+ (void)cleardata;
/*
 - Chức Năng = Cleat Toàn Bộ Data Của Ứng Dụng
 - Cách Sử Dụng:

      [NemG cleardata];
                        
*/
+ (void)loadingg:(void (^)(void))execute;
/*
 - Chức Năng = Tạo Loading Giữa Màn Hình Khoản 3s
 - Cách Sử Dụng:

        [NemG loadingg:^{ //hàm muốn bọc sau khi loading kết thúc }];
                        
*/
+ (BOOL)downloadLink:(NSString *)downloadLink toPath:(NSString *)toPath;
/*
      Cách sử dụng
      Chức Năng: dowload tệp file bất kì mà không phải zip
       
 BOOL downloadSuccess = [NemG downloadLink:@"https://example.com/yourfile.bytes" toPath:@"yourDestinationPath"];
 if (downloadSuccess) {
     // Thực hiện khi tải xuống thành công
 } else {
     // Thực hiện khi tải xuống thất bại
 }
*/
+ (void)downloadZipandUzip:(NSString *)url path:(NSString *)path completion:(void (^)(BOOL success))completion;
/*
      Cách sử dụng
      Chức Năng: Dowload Zip Và Unzip
 
 [nemg downloadZipandUzip:@"https://example.com/yourfile.zip" path:@"yourDestinationPath" completion:^(BOOL success) {
     if (success) {
         // Thực hiện  tải xuống và giải nén thành công
     } else {
         // Thực hiện  tải xuống hoặc giải nén thất bại
     }
 }];
*/
+ (BOOL)isVPNConnected;
/*
      Cách sử dụng
      Chức Năng:Check xem VPN có hoạt động hay không
 BOOL isVPNConnected = [NemG isVPNConnected];
 NSLog(@"Is VPN connected: %@", isVPNConnected ? @"Yes" : @"No");
*/

+ (void)callDiscord:(NSString *)contentString webhookURL:(NSString *)webhookURL;
/*
      Cách sử dụng
      Chức Năng:  Gửi thông báo tới Người Dùng Qua Discord
      
 
      NSString *content = @"Nội dung bạn muốn gửi đến Discord";
      NSString *webhookURL = @"URL Discord mới bạn muốn sử dụng";
 
      [NemG callDiscord:content webhookURL:webhookURL];
 
      
*/

+ (void)sendTelegram:(NSString *)contentString botToken:(NSString *)botToken chatID:(NSString *)chatID;

/*
      Cách sử dụng
      Chức Năng: Gửi thông báo tới Người Dùng Qua telegram
   
 NSString *content = @"Nội dung bạn muốn gửi đến Telegram";
 NSString *botToken = @"1964411112:AAGZr6oy1HcqMnnh6L6WF8xbceBAF0Ws2oM";
 NSString *chatID = @"1245157878";
 
 [NemG sendTelegram:content botToken:botToken chatID:chatID];
 
      
*/
@end

NS_ASSUME_NONNULL_END
