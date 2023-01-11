package com.demo.druid;

import javax.sql.DataSource;

import com.alibaba.druid.pool.DruidDataSourceFactory;

import java.io.FileInputStream;
import java.sql.Connection;
import java.util.Properties;

public class druid {
    public static void main(String[] args) throws Exception {
        // System.out.println(System.getProperty("user.dir"));

        // 1. 导入jar包
        Properties prop = new Properties();
        prop.load(new FileInputStream("src/com/demo/druid.properties"));
        DataSource dataSource = DruidDataSourceFactory.createDataSource(prop);
        Connection connection = dataSource.getConnection();
        System.out.println(connection);
    }

}
