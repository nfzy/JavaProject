package com.demo.jdbc;

import com.demo.pojo.Account;
import org.junit.Test;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

/**
 * ResultSet stmt.executeQuery(sql), 执行DQL语句，返回ResultSet对象
 * 获取查询结果：
 *  boolean next()：true有效行，当前行有数据，false相反
 *  getXxx(参数): 获取数据，例如getInt(参数),getString(参数)
 * */

public class JDBC_ResultSet {
    @Test

    public void TestResultSet() throws Exception{
        String url = "jdbc:mysql://localhost:3306/test?useSSL=FALSE";
        String username = "root";
        String password = "232330";

        Connection connection = DriverManager.getConnection(url,username,password);

        String sql = "select * from test.stu";

        Statement statement = connection.createStatement();

        ResultSet resultSet = statement.executeQuery(sql);

        // 创建集合
        List<Account> list = new ArrayList<Account>();

        // 光标向下移动一行
        while (resultSet.next()){
            Account account = new Account();
            int id = resultSet.getInt(1);
            String string = resultSet.getString(2);
            double result = resultSet.getDouble(6);

            account.setId(id);
            account.setName(string);
            account.setScore(result);
            list.add(account);
        }
        System.out.println(list);

        resultSet.close();
        connection.close();
        statement.close();
    }
}