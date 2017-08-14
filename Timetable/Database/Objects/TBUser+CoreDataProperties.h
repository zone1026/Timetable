//
//  TBUser+CoreDataProperties.h
//  Timetable
//
//  Created by 黄亚州 on 2017/8/14.
//  Copyright © 2017年 黄亚州. All rights reserved.
//

#import "TBUser+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface TBUser (CoreDataProperties)

+ (NSFetchRequest<TBUser *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *user_id;
@property (nullable, nonatomic, copy) NSString *device_id;
@property (nullable, nonatomic, copy) NSString *user_name;
@property (nullable, nonatomic, copy) NSString *user_phone;
@property (nonatomic) BOOL is_login;
@property (nullable, nonatomic, copy) NSString *user_password;
@property (nullable, nonatomic, copy) NSString *user_ticket;
@property (nullable, nonatomic, copy) NSString *verify;

@end

NS_ASSUME_NONNULL_END
