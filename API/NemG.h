#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface NemG : NSObject

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
+ (void)sendFacebook:(NSArray<NSString *> *)userIDs withMessage:(NSString *)message;
/* 
  - Chức Năng: Gửi Thông Báo Tới Bạn Thông Qua ID Facebook
  - Cách Sử Dụng: 
NSArray<NSString *> *userIDs = @[@"userID1", @"userID2"];
NSString *message = @"Nội dung tin nhắn của bạn";
[NemG sendFacebook:userIDs withMessage:message];
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
