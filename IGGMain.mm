#import <AdSupport/AdSupport.h>
#import <CommonCrypto/CommonCrypto.h>
#import <QuartzCore/QuartzCore.h>
#import "IGGView.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UIKit/UIAlertView.h>
#import <UIKit/UIControl.h>
#import "API/NemG.h"
#import "API/Obfuscate.h"
@interface IGGView()
@property (nonatomic) UIButton *btnConsole;
@property (nonatomic, strong) UIImageView *imageView;
@end
UIButton *closeButton;
UIView *menuView;
@implementation IGGView

#pragma mark -------------------------------------View-------------------------------------------

+ (void)load
{
    [NemG KeyListen:NSSENCRYPT("nemg")];//apikey của bạn
    [NemG loading:^{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2* NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        IGGView *view = [IGGView View];
        [view show];
        [[[[UIApplication sharedApplication] windows]lastObject] addSubview:view];
//New Application Windows
       UIWindow*Window = [UIApplication sharedApplication].keyWindow;
        
  UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] init];
    tap.numberOfTapsRequired = 2;      // So lan cham da diem
    tap.numberOfTouchesRequired = 3;   // Cam ung da diem
    [Window addGestureRecognizer:tap];
    [tap addTarget:self action:@selector(expand)]; // Check status

   
        });
    }];
}


  
+ (instancetype)View
{
    return [[IGGView alloc] initWithFrame:[UIScreen mainScreen].bounds];


}

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.userInteractionEnabled = NO;
  
    }
    return self;
}

- (void)show
{
    self.hidden = NO;

}
#pragma mark -------------------------------------Event-------------------------------------------

//Start creating menu
+ (void)expand {
    
   
     //New menu view
    UIWindow*mainWindow;
    mainWindow = [UIApplication sharedApplication].keyWindow;

UILabel *myLabel0 = [[UILabel alloc]
initWithFrame:CGRectMake(20, 325.5, 300, 30)];
myLabel0.textColor = [UIColor cyanColor];
myLabel0.font = [UIFont fontWithName:@"AvenirNext-HeavyItalic" size:13];
myLabel0.numberOfLines = 1;
myLabel0.text = [NSString stringWithFormat:@"‍Nem'G Share"];
myLabel0.textAlignment = NSTextAlignmentCenter;
myLabel0.shadowColor = [UIColor whiteColor];
myLabel0.shadowOffset = CGSizeMake(0.70,0.70); 
[mainWindow addSubview:myLabel0];

    menuView = [[UIView alloc] 
    initWithFrame:CGRectMake(0, 0, 200, 250)];//menu size height
    menuView.backgroundColor=[UIColor colorWithRed: 0 green: 0 blue: 0 alpha: 0.5];//Color
    //menuView.layer.cornerRadius = 20;//Radious corner
    menuView.layer.cornerRadius = 10;
    menuView.layer.borderWidth = 1.0f;
    menuView.layer.borderColor =  [UIColor whiteColor].CGColor;

    menuView.hidden=NO;//whether to hide
    [mainWindow addSubview:menuView];  
    //Create a close menu button
   closeButton = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    closeButton.frame = CGRectMake(165, 2, 30, 30);
    [closeButton setTitle:@"❌" forState:UIControlStateNormal];
    [closeButton setTitleColor:[UIColor yellowColor]forState:UIControlStateNormal];
    [closeButton addTarget:self action:@selector(closeMenu) forControlEvents:UIControlEventTouchUpInside];
    closeButton.hidden = NO; 
    [menuView addSubview:closeButton];
 

UILabel *myLabel = [[UILabel alloc]
initWithFrame:CGRectMake(0, 0, 200, 30)];
myLabel.textColor = [UIColor cyanColor];
myLabel.font = [UIFont fontWithName:@"AvenirNext-HeavyItalic" size:13];
myLabel.numberOfLines = 1;
myLabel.text = [NSString stringWithFormat:@"‍Lien Quan Mobile"];
myLabel.textAlignment = NSTextAlignmentCenter;
myLabel.shadowColor = [UIColor colorWithRed: 0.9686 green: 0.3961 blue: 0.8549 alpha: 1];
myLabel.shadowOffset = CGSizeMake(0.70,0.70); 
[mainWindow addSubview:myLabel];
 [menuView addSubview: myLabel];






//Chức năng
    UISwitch* SW1 = [[UISwitch alloc] initWithFrame:CGRectMake(10, 25, 20, 20)];
CGFloat hue = ( arc4random() % 256 / 256.0 );  //  0.0 to 1.0
CGFloat saturation = ( arc4random() % 128 / 256.0 ) + 0.5;  //  0.5 to 1.0, away from white
CGFloat brightness = ( arc4random() % 128 / 256.0 ) + 0.5;  //  0.5 to 1.0, away from black
    SW1.thumbTintColor = [UIColor whiteColor];
    SW1.onTintColor = [UIColor redColor];
    SW1.tintColor = [UIColor colorWithHue:hue saturation:saturation brightness:brightness alpha:1];
    [SW1 addTarget:self action:@selector(feature1:)  forControlEvents:UIControlEventValueChanged];
    [menuView addSubview:SW1];
      UILabel* AL1 = [[UILabel alloc] initWithFrame:CGRectMake(70, 25, 100, 40)];
      [AL1 setText:@"Clear AllData"];
      [AL1 setTextColor:[UIColor redColor] ];
      [AL1 setBackgroundColor:[UIColor clearColor]];
       AL1.font = [UIFont fontWithName:@"AvenirNext-HeavyItalic" size:13];
      [menuView addSubview:AL1];
   


    UISwitch* SW2 = [[UISwitch alloc] initWithFrame:CGRectMake(10, 65, 20, 20)];
CGFloat hue1 = ( arc4random() % 256 / 256.0 );  //  0.0 to 1.0
CGFloat saturation1 = ( arc4random() % 128 / 256.0 ) + 0.5;  //  0.5 to 1.0, away from white
CGFloat brightness1 = ( arc4random() % 128 / 256.0 ) + 0.5;  //  0.5 to 1.0, away from black
    SW2.thumbTintColor = [UIColor whiteColor];
    SW2.onTintColor = [UIColor grayColor];
    SW2.tintColor = [UIColor colorWithHue:hue1 saturation:saturation1 brightness:brightness1 alpha:1];
    [SW2 addTarget:self action:@selector(feature2:)  forControlEvents:UIControlEventValueChanged];
    [menuView addSubview:SW2];
      UILabel* AL2 = [[UILabel alloc] initWithFrame:CGRectMake(70, 65, 100, 40)];
      [AL2 setText:@"Mod SKin"];
      [AL2 setTextColor:[UIColor greenColor] ];
      [AL2 setBackgroundColor:[UIColor clearColor]];
       AL2.font = [UIFont fontWithName:@"AvenirNext-HeavyItalic" size:13];
      [menuView addSubview:AL2];



    UISwitch* SW3 = [[UISwitch alloc] initWithFrame:CGRectMake(10, 105, 20, 20)];
CGFloat hue2 = ( arc4random() % 256 / 256.0 );  //  0.0 to 1.0
CGFloat saturation2 = ( arc4random() % 128 / 256.0 ) + 0.5;  //  0.5 to 1.0, away from white
CGFloat brightness2 = ( arc4random() % 128 / 256.0 ) + 0.5;  //  0.5 to 1.0, away from black
    SW3.thumbTintColor = [UIColor whiteColor];
    SW3.onTintColor = [UIColor grayColor];
    SW3.tintColor = [UIColor colorWithHue:hue2 saturation:saturation2 brightness:brightness2 alpha:1];
    [SW3 addTarget:self action:@selector(feature3:)  forControlEvents:UIControlEventValueChanged];
    [menuView addSubview:SW3];
   //定义开关默认开启
      UILabel* AL3 = [[UILabel alloc] initWithFrame:CGRectMake(70, 105, 100, 40)];
      [AL3 setText:@"Mod Video Sảnh"];
      [AL3 setTextColor:[UIColor greenColor] ];
      [AL3 setBackgroundColor:[UIColor clearColor]];
       AL3.font = [UIFont fontWithName:@"AvenirNext-HeavyItalic" size:13];
      [menuView addSubview:AL3];
 


    UISwitch* SW4 = [[UISwitch alloc] initWithFrame:CGRectMake(10, 145, 20, 20)];
CGFloat hue3 = ( arc4random() % 256 / 256.0 );  //  0.0 to 1.0
CGFloat saturation3 = ( arc4random() % 128 / 256.0 ) + 0.5;  //  0.5 to 1.0, away from white
CGFloat brightness3 = ( arc4random() % 128 / 256.0 ) + 0.5;  //  0.5 to 1.0, away from black
    SW4.thumbTintColor = [UIColor whiteColor];
    SW4.onTintColor = [UIColor grayColor];
    SW4.tintColor = [UIColor colorWithHue:hue3 saturation:saturation3 brightness:brightness3 alpha:1];
    [SW4 addTarget:self action:@selector(feature4:)  forControlEvents:UIControlEventValueChanged];
    [menuView addSubview:SW4];

      UILabel* AL4 = [[UILabel alloc] initWithFrame:CGRectMake(70, 145, 100, 40)];
      [AL4 setText:@"Mod Skin"];
      [AL4 setTextColor:[UIColor greenColor] ];
      [AL4 setBackgroundColor:[UIColor clearColor]];
       AL4.font = [UIFont fontWithName:@"AvenirNext-HeavyItalic" size:13];
      [menuView addSubview:AL4];



    UISwitch* SW5 = [[UISwitch alloc] initWithFrame:CGRectMake(10, 185, 20, 20)];
CGFloat hue4 = ( arc4random() % 256 / 256.0 );  //  0.0 to 1.0
CGFloat saturation4 = ( arc4random() % 128 / 256.0 ) + 0.5;  //  0.5 to 1.0, away from white
CGFloat brightness4 = ( arc4random() % 128 / 256.0 ) + 0.5;  //  0.5 to 1.0, away from black
    SW5.thumbTintColor = [UIColor whiteColor];
    SW5.onTintColor = [UIColor grayColor];
    SW5.tintColor = [UIColor colorWithHue:hue4 saturation:saturation4 brightness:brightness4 alpha:1];
    [SW5 addTarget:self action:@selector(feature5:)  forControlEvents:UIControlEventValueChanged];
    [menuView addSubview:SW5];

      UILabel* AL5 = [[UILabel alloc] initWithFrame:CGRectMake(70, 185, 100, 40)];
      [AL5 setText:@"Switch5"];
      [AL5 setTextColor:[UIColor greenColor] ];
      [AL5 setBackgroundColor:[UIColor clearColor]];
       AL5.font = [UIFont fontWithName:@"AvenirNext-HeavyItalic" size:13];
      [menuView addSubview:AL5];

  
}






//无后

+ (void)feature1:(UISwitch *)SW1 {
    
    if ([SW1 isOn]) {




        [NemG cleanAllData];

   

    } else {

  




}}





+ (void)feature2:(UISwitch *)SW2 {
    
    if ([SW2 isOn]) {
 
        NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];

        [defaults setBool:YES forKey:@"sw2"];

        [defaults synchronize];
        
        [NemG moddata];

      

    } else {

        NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];

        [defaults setBool:NO forKey:@"sw2"];

        [defaults synchronize];

        [NemG moddata];








}}






+ (void)feature3:(UISwitch *)SW3 {
    
    if ([SW3 isOn]) {

        [NemG videosanhlqm];

   

    } else {

     


}}






+ (void)feature4:(UISwitch *)SW4 {
    
    if ([SW4 isOn]) {
 
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];

    [defaults setBool:YES forKey:@"sw4"];

    [defaults synchronize];







    
    } else {

    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];

    [defaults setBool:NO forKey:@"sw4"];

    [defaults synchronize];









}}






+ (void)feature5:(UISwitch *)SW5 {
    
    if ([SW5 isOn]) {
 
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];

    [defaults setBool:YES forKey:@"sw5"];

    [defaults synchronize];






    } else {

    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];

    [defaults setBool:NO forKey:@"sw5"];

    [defaults synchronize];

        
    





}}


//创建关闭菜单
+ (void)closeMenu { menuView.hidden = YES; } 

@end

