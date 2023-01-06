package com.demo.brand;

import com.alibaba.druid.pool.DruidDataSourceFactory;
import com.demo.pojo.Brand;
import org.junit.Test;

import javax.sql.DataSource;
import java.io.FileInputStream;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;
import java.util.Properties;


public class BrandTest {

    @Test
    public void testSelectAll() throws Exception {
        // 1. 加载配置文件
        System.out.println("user.dir");
        Properties prop = new Properties();
        prop.load(new FileInputStream("D:/Documents/Demo/Code/Java/JDBC/src/com/demo/druid.properties"));

        // 2. 获取连接池对象
        DataSource dataSource = DruidDataSourceFactory.createDataSource(prop);

        // 3. 获取数据库连接Connection
        Connection connection = dataSource.getConnection();

        String sql = "SELECT * FROM tb_brand";

        PreparedStatement preparedStatement = connection.prepareStatement(sql);

        ResultSet resultSet = preparedStatement.executeQuery();

        List<Brand> brands = new ArrayList<>();
        while(resultSet.next()){
            int id = resultSet.getInt("id");
            String brandName = resultSet.getString("brand_name");
            String companyName = resultSet.getString("company_name");
            int ordered = resultSet.getInt("ordered");
            String description = resultSet.getString("description");
            int status = resultSet.getInt("status");

            Brand brand = new Brand();
            brand.setId(id);
            brand.setStatus(status);
            brand.setBrandName(brandName);
            brand.setCompanyName(companyName);
            brand.setOrdered(ordered);
            brand.setDescription(description);
            
            brands.add(brand);

        }
        System.out.println(brands);
        resultSet.close();
        preparedStatement.close();
        connection.close();
    }
}
