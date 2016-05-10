@interface DopeLock : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_topView;
    UILabel *_h1;
    UILabel *_h2;
    UILabel *_ncToday;
    UILabel *_ncTomorrow;
    UIView *_todayTomorrowView;
    UILabel *_todayTomorrow;
    UILabel *_todayDate;
    UILabel *_calendarLabel;
    UIView *_separator;
    UIVisualEffectView *_blurEffectView1;
    UIVisualEffectView *_blurEffectView2;
    NSString *_todayNCText;
    NSString *_todayAltNCText;
    NSString *_tomorrowNCText;
    UIView *_eventView;
    UIView *_eventViewDay0;
    UIView *_eventViewDay1;
    UIView *_eventViewDay2;
    UIView *_eventViewDay3;
    UIView *_eventViewDay4;
    UIView *_eventViewDay5;
    UIView *_eventViewDay6;
    UILabel *_eventDescription;
    UIView *_eventBlocView;
    UILabel *_eventBlockName;
    UIBlurEffect *_effect1;
    UIBlurEffect *_effect2;
    UIBlurEffect *_effect3;
    NSMutableArray *_events0;
    NSMutableArray *_events1;
    NSMutableArray *_events2;
    NSMutableArray *_events3;
    NSMutableArray *_events4;
    NSMutableArray *_events5;
    NSMutableArray *_events6;
    NSString *_user;
}
@property(nonatomic) BOOL militaryTime;
@property(nonatomic) BOOL fullBlur;
@property(nonatomic) BOOL textColor;
@property(nonatomic) long long styleColor;
@property(retain, nonatomic) UIView *topView;
@property(copy, nonatomic) NSString *user;
@property(retain, nonatomic) UILabel *h1;
@property(retain, nonatomic) UILabel *h2;
@property(retain, nonatomic) UILabel *ncToday;
@property(retain, nonatomic) UILabel *ncTomorrow;
@property(retain, nonatomic) UIView *todayTomorrowView;
@property(retain, nonatomic) UILabel *todayTomorrow;
@property(retain, nonatomic) UILabel *todayDate;
@property(retain, nonatomic) UILabel *calendarLabel;
@property(retain, nonatomic) UIView *separator;
@property(retain, nonatomic) UIView *separator2;
@property(retain, nonatomic) UIVisualEffectView *blurEffectView1;
@property(retain, nonatomic) UIVisualEffectView *blurEffectView2;
@property(copy, nonatomic) NSString *todayNCText;
@property(copy, nonatomic) NSString *todayAltNCText;
@property(copy, nonatomic) NSString *tomorrowNCText;
@property(retain, nonatomic) UIView *eventView;
@property(retain, nonatomic) UIView *eventViewDay0;
@property(retain, nonatomic) UIView *eventViewDay1;
@property(retain, nonatomic) UIView *eventViewDay2;
@property(retain, nonatomic) UIView *eventViewDay3;
@property(retain, nonatomic) UIView *eventViewDay4;
@property(retain, nonatomic) UIView *eventViewDay5;
@property(retain, nonatomic) UIView *eventViewDay6;
@property(retain, nonatomic) UIScrollView *eventDescription0;
@property(retain, nonatomic) UIScrollView *eventDescription1;
@property(retain, nonatomic) UIScrollView *eventDescription2;
@property(retain, nonatomic) UIScrollView *eventDescription3;
@property(retain, nonatomic) UIScrollView *eventDescription4;
@property(retain, nonatomic) UIScrollView *eventDescription5;
@property(retain, nonatomic) UIScrollView *eventDescription6;
@property(retain, nonatomic) UIView *eventBlocView;
@property(retain, nonatomic) UILabel *eventBlockName;
@property(retain, nonatomic) UIBlurEffect *effect1;
@property(retain, nonatomic) UIBlurEffect *effect2;
@property(retain, nonatomic) UIBlurEffect *effect3;


-(void)addBasicsToView;
-(void)updateView;
-(void)rotateView;
-(void)updateTodayTomorrow:(NSMutableArray *)arg1;
-(void)randomGreeting;
-(void)drawBackgroundForEvents:(int)dayNumber date:(NSDate *)dateToDraw view:(UIView **)eventView;
-(UIView *)drawGridView;

@end