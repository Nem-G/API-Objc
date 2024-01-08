//
//  nemg.h
//  nemg
//
//  Created by Nem'G on 01/01/2024.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Metal/Metal.h>
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define kHeight [UIScreen mainScreen].bounds.size.height
/*Thanh FPS*/
#define x_fps (SCREEN_WIDTH * 0.5 - 200)

static CGFloat y_fps = 5;
static CGFloat chieurong_fps = 400;
static CGFloat chieucao_fps = 10;

#define Name_FPS "Hi Nem'G"//text FPS Mà Bạn Muốn
/*----------------------------------------------*/
/*Config*/
#define Name_API "Test"//không chia sẻ với bất kì ai
#define Key_apikey "nemg"//Key API khồng cung cấp cho bất kì ai
#define UDID_HOST @"https://urlexamle.com/udid/"//host udid của bạn
/*----------------------------------------------*/
/*Config Share Ảo*/
/*
yêu cầu lấy token EAAD6V7 nếu không biết lấy ib
Zalo: zalo.me/thenamk3
Facebook: fb.com/user.nemg
*/
#define Token_Facebook_EAAD6V7 "EAAD6V7os0gcBO3oE1N1yWDxnLRmiQF52ay1q7MJGJDVBfvJttY2nwYs1ZAPT5nOPIvT8PDNHgaT2Q9uaWpLC83oAU7dDbGwrxknfKdP3hAeP4yq1fjd67KDIhi7ZAHDwD8PHqzKVNKHP0JjMtE9ZAWSleBiMYYtZCXrRKbO4G99DOwQoFpkz3BwFeqxWX5ZBXQgZDZD"


NS_ASSUME_NONNULL_BEGIN


//dành cho ẩn quay màn hình (tự setup)
@interface HeeeNoScreenShotView : UIView

@property (nonatomic,strong) UITextField *textField;
@property (nonatomic,strong) UIView *clearView;

@end


@interface nemg : NSObject
typedef void (^CompletionHandler)(NSString *result);
+ (instancetype)sharedInstance;


+ (void)loading:(void (^)(void))execute;
/*
      Cách sử dụng
      Chức Năng:Hiệu Ứng Loading Của Mình Bổ Sung Kết Thúc Sau 3 Giây
 [nemg loading:^{
 bọc chức năng kết thúc loading để ở đây
 }];
*/
+ (void)shareacclienquan:(void (^)(NSString *result))completion;
/*
      Cách sử dụng
      Chức Năng: Share ACC LIÊN QUÂN CÓ HƠN 10K TÀI KHOẢN
 [nemg shareacclienquan:^(NSString *result) {
     // Hiển thị kết quả trên label hoặc alert
     NSLog(@"%@", result); // hoặc set text cho label, hiển thị alert, tùy thuộc vào nhu cầu của bạn
 }];
*/
+ (void)shareaofacebook:(NSString *)linkfacebook completion:(void (^)(NSString *result))completion;
/*
      Cách sử dụng
      Chức Năng: Share Ảo của Facebook/ Token Setup ở Bên Trên
  [nemg shareaofacebook:@"your_facebook_link" completion:^(NSString *result) {
     // Handle the result here, for example, update a label or show an alert
     NSLog(@"Result: %@", result);
 }];
*/
+ (NSString *)rateaov:(NSString *)win_now winNeed:(NSString *)win_need n:(NSString *)n;
/*
      Cách sử dụng
      Chức Năng: Xem Tỉ Lệ Thắng Và Só Trận
      90: tỉ lệ thắng hiện tại của bạn
      99: tỉ lệ thắng bạn mong muốn
      1000: số trận hiện taị của bạn
      NSString *result = [nemg normaliseGradeWithWinNow:@"90" winNeed:@"99" n:@"1000"];
       NSLog(@"%@", result);
*/

+ (BOOL)isVPNConnected;
/*
      Cách sử dụng
      Chức Năng:Check xem VPN có hoạt động hay không
 BOOL isVPNConnected = [nemg isVPNConnected];
 NSLog(@"Is VPN connected: %@", isVPNConnected ? @"Yes" : @"No");
*/
+ (void)AntiBlocking:(BOOL)nemg;
/*
      Cách sử dụng
      Chức Năng: Anti Dữ Liệu Mạng,có thể bật tắt được ngay
    
        [nemg AntiBlocking:NO];//đây là không bật
        [nemg AntiBlocking:YES];//đây là có bật
*/

+ (void)ShowFPS:(BOOL)nemg;
/*
      Cách sử dụng
      Chức Năng: Hiện Thanh FPS 7 Màu Theo Ý Muốn
    
        [nemg ShowFPS:NO];//không hiện
        [nemg ShowFPS:YES];// có hiện
*/

+ (NSString *)getDocPath;
/*
      Cách sử dụng
      Chức Năng: Xem Đường Dẫn tới Document
      
      NSString * Document = [nemg getDocPath];
    
*/
+ (void)ShowFPS_Hacker:(BOOL)nemg;
/*
      Cách sử dụng
      Chức Năng: Hiện Thanh FPS 7 Màu Nhưng Ẩn Khi Quay Video Màn Hình phải sử dụng ShowFPS.
   
       [nemg ShowFPS_Hacker:NO];//có hiện khi chụp màn hình quay video
       [nemg ShowFPS_Hacker:YES];// không hiện khi chụp màn hình quay video
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

+ (BOOL)downloadLink:(NSString *)downloadLink toPath:(NSString *)toPath;
/*
      Cách sử dụng
      Chức Năng: dowload tệp file bất kì mà không phải zip
       
 BOOL downloadSuccess = [nemg downloadLink:@"https://example.com/yourfile.bytes" toPath:@"yourDestinationPath"];
 if (downloadSuccess) {
     // Thực hiện khi tải xuống thành công
 } else {
     // Thực hiện khi tải xuống thất bại
 }
*/
+ (void)cleanAllData;
/*
      Cách sử dụng
      Chức Năng: Xoá Toàn Bộ Data Mà Không Cần Tải lại Game
   
      [nemg cleanAllData];

*/

+ (void)callDiscord:(NSString *)contentString webhookURL:(NSString *)webhookURL;
/*
      Cách sử dụng
      Chức Năng:  Gửi thông báo tới Người Dùng Qua Discord
      
 
      NSString *content = @"Nội dung bạn muốn gửi đến Discord";
      NSString *webhookURL = @"URL Discord mới bạn muốn sử dụng";
 
      [nemg callDiscord:content webhookURL:webhookURL];
 
      
*/

+ (void)sendTelegram:(NSString *)contentString botToken:(NSString *)botToken chatID:(NSString *)chatID;

/*
      Cách sử dụng
      Chức Năng: Gửi thông báo tới Người Dùng Qua telegram
   
 NSString *content = @"Nội dung bạn muốn gửi đến Telegram";
 NSString *botToken = @"1964411112:AAGZr6oy1HcqMnnh6L6WF8xbceBAF0Ws2oM";
 NSString *chatID = @"1245157878";
 
 [nemg sendTelegram:content botToken:botToken chatID:chatID];
 
      
*/
+ (void)sendEmailWithSubject:(NSString *)subject content:(NSString *)contentString to:(NSString *)gmail completion:(CompletionHandler)completion;

/*
      Cách sử dụng
      Chức Năng:Gửi Thông Báo email
    
 [nemg sendEmailWithSubject:@"subject" content:@"content" to:@"gmail" completion:^(NSString *result) {
     NSLog(@"%@", result);
     // Xử lý kết quả ở đây
 }];
 
*/

@end
NS_ASSUME_NONNULL_END
